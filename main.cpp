#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       ball
//  action 1:   the ball rolls
ball.roll();
//  action 2:   the ball flys
ball.fly();
//  action 3:   the ball falls
ball.fall();
//  2)
//  Noun:       stone
//  action 1:   the stone sinks
stone.sink();
//  action 2:   the stone cracks
stone.crack();
//  action 3:   the stone moves
stone.move(); 
//  3)
//  Noun:       chair
//  action 1:   the chair breaks
chair.break();
//  action 2:   the chair slants
chair.slant();
//  action 3:   the chair buckles
chair.buckle(); 
//  4)
//  Noun:       vinyl
//  action 1:   the vinyl plays
vinyl.play();
//  action 2:   the vinyl scratches
vinyl.scratch();
//  action 3:   the vinyl snaps
vinyl.snap(); 
//  5)
//  Noun:       towel
//  action 1:   the towel drys
towel.dry();
//  action 2:   the towel hangs
towel.hang();
//  action 3:   the towel covers
towel.cover(); 
//  6)
//  Noun:       mirror
//  action 1:   the mirror shines
mirror.shine();
//  action 2:   the mirror smashes
mirror.smash();
//  action 3:   the mirror reflects
mirror.reflect(); 
//  7)
//  Noun:       paper
//  action 1:   the paper folds inwards
paper.foldInward();
//  action 2:   the paper rips
paper.rip();
//  action 3:   the paper tears
paper.tear(); 
//  8)
//  Noun:       plant
//  action 1:   the plant grows upwards
plant.growUpward();
//  action 2:   the plant curls
plant.curl();
//  action 3:   the plant drains
plant.drain(); 
//  9)
//  Noun:       coffee table
//  action 1:   the coffee table moves left
coffeTable.moveLeft();
//  action 2:   the coffee table moves right
coffeeTable.moveRight();
//  action 3:   the coffee table rotates clockwise
coffeeTable.rotateClockwise(); 
//  10)
//  Noun:       fire
//  action 1:   the fire burns
fire.burns();
//  action 2:   the fire heats
fire.heat();
//  action 3:   the fire cooks
fire.cook(); 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
