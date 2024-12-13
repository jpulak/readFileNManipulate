# readFileNManipulate
Problem Description
In this program you will be reading numbers from a file. You will validate the numbers and calculate the average of the valid numbers. The numbers will be of type double.

You will find the average of the numbers read that are in the range 1 to 150 (inclusive). Values outside this range will be written to a file named badvalues.txt. After you have read all the numbers in the file, display the total number of values read, the number of valid values read, and the number of invalid values read. When there was at least one valid number in the file, you will calculate and display the average of the valid values.

The Details
Name your program AverageValues.cpp.

Your program will read in a file name from cin. Use the message Enter the input file name: when asking for the file name. Put a space after the colon and read the text entered on the same line.

Next your program will attempt to open the input file.

Your program must also open an output file called badvalues.txt. You will write invalid values to this file in fixed point notation with exactly three digits to the right of the decimal point.

The processing loop will read the input data and process it until it gets and end of file indication from the file read operation.

Your program must properly check for end of file. See the section Reading Text Files from Part 1 and see your Gaddis textbook for details on reading a file and checking for the end of file.

The average of the valid values must be displayed in fixed-point notation with exactly two digits to the right of the decimal point.

Should there not be any valid values in the file, instead of displaying the average you will display the following message on the computer screen:
```
The file did not contain any valid values.
```
End this message with a newline.

If the input file could not be opened your program should output an error message to cout. Assume the file we are reading in from is called values.txt, and the file does not exist. The error message written to cout is:
```
The file "values.txt" could not be opened.
```
End this message with a newline.

The Format of the Input File
Each line of the text file contains one number that should be stored as a double. There will be zero or more numbers in the file.

Here are the contents of a sample input text file:
```
120.7
25
37
0
87
80.5
150.3
```
Sample Run
Here is an example run. Assume the following input is read from cin:
```
values.txt
```
Assume that the content of the file values.txt are as follows:
```
120.7
25
37
0
87
80.5
150.3
86
73
72.5
94
0.5
1
150
68
51.6
```
The following are the results displayed on the screen:
```
Total number of values read: 16
Valid values read: 13
Invalid values read: 3
The average of the valid numbers read = 72.79
```
The contents of badvalues.txt for the input above would be:
```
0.000
150.300
0.500
```
You are reading from an input file and you are writing to an output file. Make sure you close both files after you are finished using them. You must do this in your program, you cannot just let the operating system close the files for you.

In this lab. and some future labs, you will be creating an output file. There could be output to cout as well.

For tests where there is output written to an output file the contents of the output file will determine if you passed that test or not. For cases where you have written to cout the tests will check the output sent to cout.

Failure to follow the requirements for lab lessons can result in deductions to your points, even if you pass the validation tests. Logic errors, where you are not actually implementing the correct behavior, can result in reductions even if the test cases happen to return valid answers. This will be true for this and all future lab lessons.

Important Note:

Finally, do not include a system("pause"); statement in your programs. This will cause your verification steps to fail. Note: that the system("pause"); command runs the pause command on the computer where the program is running. The pause command is a Windows command. Your program will be run on a server in the cloud. The cloud server may be running a different operating system (such as Linux).

Testing Your Program in Your IDE
You will have to create input files for your program. You can use a text editor such as Notepad or Notepad++ to create these. There may also be an editor in your IDE that you can use. You can use the TextEdit program on macOS but you will need to change the format to Make Plain Text. You will not be uploading these text files to zyBooks/zyLabs. The submit tests will be using their own files. Make sure that some of your files contain a newline at the end of the last line of text in the file. You can do this by hitting the enter key after the last number of the last line in the file. This will match the type of file usually created by programs. This is the type of file that is used for the zyBooks tests. See the description below on reading in files.

You should be creating and thoroughly testing you source code in your IDE before submitting for grading in Zylabs. ZYLABS IS AN AUTO-GRADER. It is not your tester.
