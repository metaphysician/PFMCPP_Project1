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
    car
    foot
    cat
    ball
    game
    bear
    lawnmower
    instrument
    phone
    camera


 
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
       
    car - car.movesForward() car.movesBackward() car.stops()
    foot - foot.moves() foot.rotatesLeft() foot.stomps()
    cat - cat.meows() cat.scratchesPost() cat.naps()
    ball - ball.Bounces() ball.strikesObject() ball.stops()
    game - game.starts() game.pauses() game.finishes()
    bear - bear.attacks() bear.eatsHoney() bear.rubsTummy()
    lawnmower - rotatesBlade() stopsBladeRotation() engagesDrivetrain()
    instrument - instrument.tunesItself() instrument.PlaysNote() instrument.ReleasesNote()
    phone - phone.connectsCall() phone.updatesOS() phone.applySettings()
    camera - processImage() adjustAutoFocus() storeImageInMemory()
        
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
//  Noun:car
//  action 1:car moves forward
car.moveForward();  

//  action 2:car moves backward
car.moveBackward();

//  action 3:car stops moving
car.stop();
 
//  2)
//  Noun:foot  
//  action 1:foot moving in any direction
foot.move();
//  action 2:rotate foot to the left
foot.rotateLeft()
//  action 3:stomps foot
foot.stomp();
//  3)  
//  Noun: cat
//  action 1:cat meows
cat.meow();
//  action 2:cat scratches post
cat.scratchPost();
//  action 3:cat naps
cat.nap();
//  4) 
//  Noun: ball
//  action 1:ball bounces
ball.bounce(); 
//  action 2:ball strikes an object
ball.strikesObject();
//  action 3:ball stops moving
ball.stop()
//  5) 
//  Noun:game
//  action 1:game starts
game.start()
//  action 2:game pauses playback
game.pauses()
//  action 3:game finishes
game.finish()
//  6) 
//  Noun:bear   
//  action 1:bear attacks
bear.attack()
//  action 2:bear eats honey
bear.eatHoney()
//  action 3:bear rubs its tummy
bear.rubTummy() 
//  7) 
//  Noun:lawnmower   
//  action 1:rotates blade
lawnmower.rotateBlade();
//  action 2:stops blade rotation
lawnmower.stopBladeRotation();
//  action 3:sets lawnmower in gear so it will move
lawnmower.engageDrivetrain()
//  8) 
//  Noun:instrument -   
//  action 1:instrument tunes itself
instrument.tuneSelf()
//  action 2:instrument plays note
instrument.playNote()
//  action 3:instrument releases note
instrument.releaseNote() 
//  9) 
//  Noun:phone   
//  action 1:
phone.connectCall()
//  action 2:
phone.updateOS()
//  action 3:
phone.applySettings() 
//  10) 
//  Noun:camera  
//  action 1:camera processes image received
camera.processImage()
//  action 2:camera adjusts autofocus
camera.adjustAutoFocus()
//  action 3:camera stores image in memory
camera.storeImageInMemory()


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
