"# Clocks" 

#Summarize the project and what problem it was solving.
  The project was to simultaneously display a 12-hour and 24-hour clock that can accept user input in order to display a certain time, and to increment the time when deemed necessary. The problem is was solving was being able to show that you can use C++ to solve a problem on par with that of a junior developer.
  
#What did you do particularly well?
  I believe that I did the formatting particularly well in this project. The clocks are lined up so that are even and symetrical with each other, and the menuthat allows someone to edit the time is also nicely contained in a box which matches that of the clocks.

#Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
  The main place I could improve my code is that there is a bug in the code that I have yet to fix where the time is calculated. The clock does not calculate adding 1 second to 11:59:59 PM correctly, so I would fix this. I can also change the methods used in the code to be more cohesive by making it so they don't change the variables, and instead of using cout to print the clocks/menu, they return a string that can be printed in main.

#Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
  The main piece of code that was challenging to write was trying to display the clocks using a single variable. At the time I was coding the program, I was unable to come up with a solution, but nowadays with a more clear head It would have been easy to just divide the one variable by 12, and have the remainder be displayed for the 12-hour clock. The main tool I am adding to my support network is an alarm clock so I can actually get sleep, and not try to make programs constantly sleep deprived. Also to split up my time making programs to multiple days, giving more time for the project in it's entirety.

#What skills from this project will be particularly transferable to other projects or course work?
  The main skill that is transferable to other projects is breaking up the program into methods that make the program easier to maintain and bugfix. Also splitting the methods in such a way that they do not rely on each other fully makes for better coding.

#How did you make this program maintainable, readable, and adaptable?
  The program is easily readable, as the methods are clearly defined in what they do and what they affect, and the main loop makes it easy to see when certain processes are happening. The program isn't the hardest to maintain, but I could have made it easier to maintain if I had consilidated the multiple hour variables into a single varialbe that I adjust before it gets printed.
