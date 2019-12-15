# ProjectC_COMP350
File Systems

# Introduction

This project focuses on the management of files and executing programs.

# Team Members

Thomas O’Leary  
Jarrod LeComte

# Step 1 – Jarrod LeComte, Read a file and print it

•	Created a function readFile(char*, char*) which uses the readSector function to load the directory sector into a 512 byte array
• If the file is not found, a "File Not Found" error message is produced

# Step 2 – Thomas O’Leary, Load and execute a program

• Creates function executeProgram(char*) 
• This function will utilize readFile(char*, char*) to load the file into a buffer and place it into the memory segment at 0x2000 through the putInMemory() function.
• The assembly function launchProgram(segment) passes the segment 0x2000 as the parameter and is called using interrupt 0x21 

# Step 3 – Thomas O'Leary, Terminate program

• Creates function terminate() containing an infinite loop
• In order to return to the OS, an interrupt 0x21 call is used to terminate the program

# Step 4 – Thomas O'Leary, Creating the shell

• This step creates the shell.c and userlib.asm files
• userlib.asm contains a system call (syscall) which will be used in the shell to execute functions using interrupt 0x21
• The shell contains an initial prompt[4] which includes "A:>" and returns a bad command message to be printed
• In order to load an execute the shell, makeInterrupt21() was used and interrupt 0x21 to load and execute the shell
• a char shellname[] array was created to be passed to the executeProgram function


# Step 5 – Jarrod LeComte, Shell command "type"

• Modifies shell to recognize the command "type" from a commandType[] array to load a file name into memory and print out its contents

# Step 6 - Jarrod LeComte, Shell command "exec"

• Similar to step 5, this step modifies the shell to recognize commandExecute[] array in order to load and execute a file if someone were to type "exec filename"

  
