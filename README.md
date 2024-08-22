# CS-210 Project 3 - Corner Grocer


  Summarize the project and what problem it was solving.

  The purpose of the program designed for Corner Grocer was to develop a program that read an input file with sales information regarding products in their store.
  The input file would have an item listed in the file every time that the item was sold. The program would read this input file and essentially keep a tally of
  each time and item was listed in the file. The program would provide users with a basic menu with a few different options for checking items sales frequency.
  The program would then save that frequency data into a seperate output file after executing.
  
  What did you do particularly well?

  Overall, I think that I coded this project pretty well. It felt like a culmination of all of my knowledge from the course, which required me to use everything
  I have learned over the last eight weeks. I felt that my code was very clean and followed most of the best industry practices and had good, but concise comments regarding
  the purpose of sections of the code.
  
  Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

  I think the main way I could enhance my code would be to re-write where the program was reading the input file from and where it was saving it to. When I was writing
  the code, I used file pathing that worked on my computer, but this would not work on every computer, as my file pathing is unique. In order for this program to work on most
  computers, the best way to ensure this worked on the most amount of computers would probably require the user of the program to manually select the input file the program 
  was opening in the form of something like a GUI and to also have them choose where they wanted to save and name the output file. This would also work well because it would
  allow the users a little more customization regarding their input/output files, making the program more tailored to suit their specific needs. 

  
  Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

  While the program may look intimidating to new C++ users, it wasn't overly difficult to write. It did require some trial and error but eventually it all came together.
  One part that was difficult to write was just figuring out how to get the program to open the specific input file on my computer so it would actually execute, hence the
  very specific file pathing in the code for my PC. Figuring out a way to make this a more generic process would have probably made it easier for me to write that section.
  Using a map for the first time was also somewhat difficult to understand at first as well, but I would frequently reference the zybooks section regarding maps in C++ for 
  support. I also used some helpful resources that I found online via google regarding these topics. W3schools.com is a website that I have used throughout my 
  time at SNHU learning different programming languages, as it has sections for nearly every topic for every language I have worked with thus far.
  
  What skills from this project will be particularly transferable to other projects or course work?

  I think getting comfortable using code that uses file uploads or that reads input files will be a very helpful skill when programming in the future, as lots of programs
  that people use every day often use some form of input file processing. I think that creating a menu with different functions will probably be the most common skill that
  will be transferable to other projects as almost every project I have coded since my first coding class has had at least 1 instance of using some sort of menu to handle
  different functions.
  
  How did you make this program maintainable, readable, and adaptable?

  The code is very readable by being well formatted with descriptive function and variable names and robust but concise comments throughout, providing helpful information regarding how each section of code is supposed to behave.
  The code is very maintainable as it is intentionally pretty modular in its design and supports error handling. If something goes wrong during its use, the program will tell you why.
  The code could be more adaptable (see above regarding input/output file pathing) but is adaptable because the code is designed in a modular fashion, seperate functions make it easy to modify or enhance should a programmer in the
  future wish to make any adjustments to the code.
  

