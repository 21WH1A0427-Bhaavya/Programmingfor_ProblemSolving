import turtle
wn = turtle.Screen()
wn.title("Pong by Bhaavya")
wn.bgcolor("black")
wn.setup(width = 800, height= 600)
wn.tracer(0) #stops window from updating

#Score
score_a = 0
score_b = 0


#Paddle A
paddle_a = turtle.Turtle() #Turtle() - class
paddle_a.speed(0)
paddle_a.shape("square") #default shape is 20*20 pixels
paddle_a.color("white")
paddle_a.shapesize(stretch_wid= 5, stretch_len= 1)
paddle_a.penup()
paddle_a.goto(-350, 0) #vertically centred


#Paddle B
paddle_b = turtle.Turtle() #Turtle() - class
paddle_b.speed(0)
paddle_b.shape("square") #default shape is 20*20 pixels
paddle_b.color("white")
paddle_b.shapesize(stretch_wid= 5, stretch_len= 1)
paddle_b.penup()
paddle_b.goto(350, 0) #vertically centred

#Ball
ball = turtle.Turtle() #Turtle() - class
ball.speed(0)
ball.shape("circle") #default shape is 20*20 pixels
ball.color("white")
ball.penup()
ball.goto(0, 0) #vertically centred
ball.dx = 0.2 #dx = delta x - it moves by 0.1 pixels every time it moves
ball.dy = -0.2 #dy = delta y

#Pen
pen  = turtle.Turtle()
pen.speed(0)
pen.color("white")
pen.penup()
pen.hideturtle()
pen.goto(0, 260) # score position
pen.write("Player A: 0 | Player B: 0", align = "center", font = ("Courier", 20, "normal"))


#Function
def paddle_a_up():
    y = paddle_a.ycor() #returns the y coordinate
    y += 20 # y increases as we go up and decreases as we go down since up function +20
    paddle_a.sety(y) #set y to the new y

def paddle_a_down():
    y = paddle_a.ycor() #returns the y coordinate
    y -= 20 # y increases as we go up and decreases as we go down since up function +20
    paddle_a.sety(y) #set y to the new y

def paddle_b_up():
    y = paddle_b.ycor() #returns the y coordinate
    y += 20 # y increases as we go up and decreases as we go down since up function +20
    paddle_b.sety(y) #set y to the new y

def paddle_b_down():
    y = paddle_b.ycor() #returns the y coordinate
    y -= 20 # y increases as we go up and decreases as we go down since up function +20
    paddle_b.sety(y) #set y to the new y

#Keyboard binding
wn.listen() #listen for keyboard input
wn.onkeypress(paddle_a_up, "w") #when user press w - call func paddle_a_up
wn.onkeypress(paddle_a_down, "s") #when user press s - call func paddle_a_down
wn.onkeypress(paddle_b_up, "Up") #when user press Up (up arrow) - call func paddle_b_up
wn.onkeypress(paddle_b_down, "Down") #when user press Down (Down arrow)- call func paddle_b_down



#Main game loop
while True:
    wn.update()


    #Move the ball
    ball.setx(ball.xcor() + ball.dx) #ball starts at 0,0 and through the loop it goes 2
    ball.sety(ball.ycor() + ball.dy)

    #Border checking
    #top y coordinate is +300 and bottom is -300 since the height = 600
    if ball.ycor() > 290:
        ball.sety(290)
        ball.dy *= -1 # reverses the direction of the ball

    if ball.ycor() < -290:
        ball.sety(-290)
        ball.dy *= -1

    if ball.xcor() > 390: # left and right width is 800 hence +400 to -400
        ball.goto(0, 0) # so if the ball touches the right border ball kept back to the centre
        ball.dx *= -1
        score_a += 1 # if ball goes off the right side of the screen Player A gets the point
        pen.clear()
        pen.write("Player A: {} | Player B: {}".format(score_a, score_b), align = "center", font = ("Courier", 20, "normal"))


    if ball.xcor() < -390: # left and right width is 800 hence +400 to -400
        ball.goto(0, 0) # so if the ball touches the left border ball kept back to the centre
        ball.dx *= -1
        score_b += 1    # if ball goes off the left side of the screen Player B gets the point
        pen.clear()
        pen.write("Player A: {} | Player B: {}".format(score_a, score_b), align = "center", font = ("Courier", 20, "normal"))

    #Paddle and ball collisions
    if ball.xcor() > 340 and ball.xcor() < 350 and (ball.ycor() < paddle_b.ycor() + 40 and ball.ycor() > paddle_b.ycor() - 40):
        ball.setx(340)
        ball.dx *= -1 #bounce and go back
        #ball.xcor() < 350 - when the ball touches the middle or above or below the centre of the it bounces at the point

    if ball.xcor() < -340 and ball.xcor() > -350 and (ball.ycor() < paddle_a.ycor() + 40 and ball.ycor() > paddle_a.ycor() - 40):
        ball.setx(-340)
        ball.dx *= -1 #bounce and go back



