import tkinter as tk
from tkinter import *
from tkinter import ttk
import pygame
pygame.init()


root = Tk()
root.geometry("1900x1000")
root.configure(background="pink")
root.title("Ping Pong")
fontSize1 = 28
fontsize2 = 60
t1 = tk.Label(root,background='pink',pady=10,foreground='black',font=('Coolvetica Rg',fontSize1),text="The Boolean Autocrats")
t1.pack()
t2 = tk.Label(root,background='pink',foreground='black',font=('Coolvetica Rg',fontSize1),text="present")
t2.pack()
t3 = tk.Label(root,background='pink',foreground='black',font=('Coolvetica Rg',fontsize2),text="Ping Pong ")
t3.pack()
t4 = tk.Label(root,background='pink',foreground='black',font=('Coolvetica Rg',fontSize1),text="made for")
t4.pack()
t5 = tk.Label(root,background='pink',foreground='black',font=('Coolvetica Rg',fontsize2),text="Gameleon 2022")
t5.pack()
splash_root = Tk()
splash_root.title("Ping Pong")
splash_root.geometry("1900x1000")
splash_root.configure(background='pink')
def start():

     root.destroy()

     splash_label= Label(splash_root,text="Enter Player names:",background='pink',font=("Helvetica",18))
     splash_label.pack(pady=20)
     backButton = tk.Button(splash_root,height=2,width=9,background='yellow',font=('Helvetica',18),text="Back")
     backButton.pack()
     backButton.place(x=600,y=650)
     exButton = tk.Button(splash_root, height=2, width=9, background='yellow', font=('Helvetica', 18),
                          text="Exit")
     exButton.pack()
     exButton.place(x=800, y=650)

def Hello():

    WIDTH, HEIGHT, = 700, 500
    wn = pygame.display.set_mode((WIDTH, HEIGHT)) #to setup a window
    pygame.display.set_caption("Pong!")

    FPS = 60 #frames per second - you cant run faster than 60
    WHITE = (255, 255, 255)
    YELLOW = (255, 215, 0)
    BLACK = (0,0,0)
    PADDLE_HEIGHT, PADDLE_WIDTH = 100, 20
    BALL_RADIUS = 7
    SCORE_FONT = pygame.font.SysFont("Helvitica", 50)
    WIN_SCORE = 10

    class Paddle:
        COLOR = YELLOW
        SPEED = 4    
        def __init__(self, x, y, width, height):
            self.x = self.org_x = x
            self.y = self.org_y = y
            self.width = width
            self.height = height

        def draw(self, wn):
            pygame.draw.rect(wn, self.COLOR, (self.x, self.y, self.width, self.height))

        def move(self, up=True):
            if up:
                self.y -= self.SPEED #y value decreases - going up
            else:
                self.y += self.SPEED #y value increases - going down

        def reset(self):
            self.x = self.org_x
            self.y = self.org_y

    class Ball:
    
        MAX_SPEED = 4
        COLOR = WHITE
        def __init__(self, x, y, radius):
            self.x = self.org_x = x #storing orginal x and y, so we can later change self.x and hold the org value
            self.y = self.org_y = y
            self.radius = radius
            self.x_speed = self.MAX_SPEED #moving right at max velocity and hits the paddle reverse its velocity
            self.y_speed = 0

        def draw(self, wn):
            pygame.draw.circle(wn, self.COLOR, (self.x, self.y), self.radius)

        def move(self):
            self.x += self.x_speed
            self.y += self.y_speed

        def reset(self):
            self.x = self.org_x
            self.y = self.org_y
            self.y_speed = 0
            self.x_speed *= -1 #reverse direction

    def draw(wn, paddles, ball, a_score, b_score):
        wn.fill(BLACK) #bgcolor

        a_score_text = SCORE_FONT.render(f"{a_score}", 1, WHITE)
        b_score_text = SCORE_FONT.render(f"{b_score}", 1, WHITE)
        wn.blit(a_score_text, (WIDTH//4 - a_score_text.get_width()//2, 20)) #split the window into 4 parts. get the width of the text in half and aline it center to the 1st and 2nd part of the window.
        wn.blit(b_score_text, (WIDTH * (3/4) - b_score_text.get_width()//2, 20)) #3/4th quater of the window


        for paddle in paddles:
            paddle.draw(wn)

        for i in range(10, HEIGHT, HEIGHT//20): # 10 pixels dotted line. starting at 10, looping 20 times
            if i % 2 == 1:
                continue
            pygame.draw.rect(wn, WHITE, (WIDTH//2 - 5, i, 10, HEIGHT//20)) #(x, y, width, height)

        ball.draw(wn)
        pygame.display.update()

    def handle_collision(ball, a_paddle, b_paddle):
        if ball.y + ball.radius >= HEIGHT: #collides with the bottom, reverse the direction - ball.y (center) + radius
            ball.y_speed *= -1
        elif ball.y - ball.radius <= 0: #collides with the roof
            ball.y_speed *= -1

        if ball.x_speed < 0: #x speed is negative moving the left paddle
            if ball.y >= a_paddle.y and ball.y <= a_paddle.y + a_paddle.height:
                if ball.x - ball.radius <= a_paddle.x + a_paddle.width:
                    ball.x_speed *= -1

                    middle_y = a_paddle.y + a_paddle.height/2
                    difference_in_y = middle_y - ball.y
                    red_fac = (a_paddle.height/2) / ball.MAX_SPEED
                    y_speed = difference_in_y / red_fac
                    ball.y_speed = -1 * y_speed


        else: #right paddle
            if ball.y >= b_paddle.y and ball.y <= b_paddle.y + b_paddle.height:
                if ball.x + ball.radius >= b_paddle.x:
                    ball.x_speed *= -1

                    middle_y = b_paddle.y + b_paddle.height/2
                    difference_in_y = middle_y - ball.y
                    red_fac = (b_paddle.height/2) / ball.MAX_SPEED
                    y_speed = difference_in_y / red_fac
                    ball.y_speed = -1*y_speed


    def handle_paddle_movement(keys, a_paddle, b_paddle):
        if keys[pygame.K_q] and a_paddle.y - a_paddle.SPEED >= 0: #to not let it move beyond the screen
            a_paddle.move(up=True)
        if keys[pygame.K_a] and a_paddle.y + a_paddle.SPEED + a_paddle.height <= HEIGHT:
            a_paddle.move(up=False)

        if keys[pygame.K_p] and b_paddle.y - b_paddle.SPEED >= 0:
            b_paddle.move(up=True)
        if keys[pygame.K_l] and b_paddle.y + b_paddle.SPEED + b_paddle.height <= HEIGHT:
            b_paddle.move(up=False)

    def main():
        run = True
        clock = pygame.time.Clock() #regualats framerate - run at smae rate at every computer
    
        a_paddle = Paddle(10, HEIGHT//2 - PADDLE_HEIGHT//2, PADDLE_WIDTH, PADDLE_HEIGHT) #10 pix off the left side of the screen, and aligning the paddle to the middle
        b_paddle = Paddle(WIDTH - 10 - PADDLE_WIDTH, HEIGHT//2 - PADDLE_HEIGHT//2, PADDLE_WIDTH, PADDLE_HEIGHT)
        ball = Ball(WIDTH//2, HEIGHT//2, BALL_RADIUS)

        a_score = 0
        b_score = 0


        while run: #event loop
            clock.tick(FPS) #regulates the speed of while loop
            draw(wn, [a_paddle, b_paddle], ball, a_score, b_score)

            for event in pygame.event.get(): #looping through all of the occured events
                if event.type == pygame.QUIT:
                    run = False
                    break
        
            keys = pygame.key.get_pressed()
            handle_paddle_movement(keys, a_paddle, b_paddle)

            ball.move()
            handle_collision(ball, a_paddle, b_paddle)

            if ball.x < 0:
                b_score += 1
                ball.reset()
            elif ball.x > WIDTH:
                a_score += 1
                ball.reset()

            won = False
            if a_score >= WIN_SCORE:
                won = True
                win_text = "LEFT PLAYER WON!"
            elif b_score >= WIN_SCORE:
                won = True
                win_text = "RIGHT PLAYER WON!"

            if won == True:
                text = SCORE_FONT.render(win_text, 1, YELLOW) #rendering the text
                wn.blit(text, (WIDTH//2 - text.get_width()//2, HEIGHT//2 - text.get_height()//2)) #blittling it in the center of the screen
                pygame.display.update()
                pygame.time.delay(5000) #5000 milli seconds. The text is shown for 5 seconds
                ball.reset()
                a_paddle.reset()
                b_paddle.reset()
                a_score = 0
                b_score = 0
    
        pygame.quit()

    if __name__ == "__main__":
        main()


def get_input():
         PLAYER_A = text1.get("1.0", "end-1c")
         print(PLAYER_A)
         PLAYER_B = text2.get("1.0","end-1c")
         print(PLAYER_B)
         var1 = "Rules to play Ping Pong:"
         var2 = "To contol the paddle,"
         var3 = PLAYER_A + " has to use Q ey for moving UP \n and A key for moving DOWN"
         var4 = "and "+ PLAYER_B + " has to use P key \n for moving UP and L for moving DOWN."
         splashLabel2 = Label(splash_root, background='pink', font=("Helvetica", 18), text=var1)
         splashLabel2.pack()
         splashLabel2.place(x=650, y=350)
         splashLabel3 = Label(splash_root,background='pink',font=("Helvetica", 18),text=var2)
         splashLabel3.pack()
         splashLabel3.place(x=0,y=380)
         splashLabel4 = Label(splash_root,background='pink',font=('Helvetica', 18),text=var3)
         splashLabel4.pack()
         splashLabel4.place(x=0,y=420)
         splashLabel5 = Label(splash_root, background='pink', font=('Helvetica', 18), text=var4)
         splashLabel5.pack()
         splashLabel5.place(x=850, y=420)
         splashLabel6 = Label(splash_root,highlightthickness=5,height=2,width=5,background='white',font=('Helvetica',18),text="Q")
         splashLabel6.pack()
         splashLabel6.place(x=200,y=490)
         splashLabel7 = Label(splash_root,highlightthickness=5, height=2, width=5, background='white', font=('Helvetica', 18), text="A")
         splashLabel7.pack()
         splashLabel7.place(x=200, y=550)
         splashLabel8 = Label(splash_root,highlightthickness=5,height=2,width=5,background='white',font=('Helvetica',18),text="P")
         splashLabel8.pack()
         splashLabel8.place(x=1200,y=490)
         splashLabel9 = Label(splash_root,highlightthickness=5,height=2,width=5,background='white',font=('Helvetica',18),text="L")
         splashLabel9.pack()
         splashLabel9.place(x=1200,y=550)
         playButton = tk.Button(splash_root,height=2,width=9,background='yellow',font=('Helvetica',18),text="Play",command=Hello)
         playButton.pack()
         playButton.place(x=700,y=550)


text1 = Text(splash_root, height=2, width=20)
text1.pack()
text1.place(x=600,y=100)
text2 = Text(splash_root,height=2,width=20)
text2.place(x=800,y=100)


submit = Button(splash_root, height=3, width=15, text="Submit",font=("Helvetica",18),command=lambda: get_input())
submit.pack()
submit.place(x=670,y=200)

startButton = tk.Button(height=2, width=9,background='yellow',foreground='black',font=('Coolvetica Rg',20),text="Start",command=start)
startButton.pack()
startButton.place(x=600,y=380)
exitButton = tk.Button(height=2, width=9,background='yellow',foreground='black',font=('Coolvetica Rg',20),text="Exit",command=root.destroy)
exitButton.pack()
exitButton.place(x=800,y=380)
root.mainloop()