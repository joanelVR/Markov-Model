# Markov-Model
##### In this assignment we analyze an input text for transitions between k-grams (a fixed number of characters) and the following letter by implementing the Markov Model of Natural language. The model predicts the next word that occurs given a particular k-gram series of letters defined by the order of the model. The program analyzes an input string for kgrams of length N, and maps them to a frequency table. One we have a filled out table to the kgrams and the characters following the kgrams the program generates a random text that follows the parent.
##### A Markov model of order k predicts that each letter occurs with a fixed probability, but that probability can depend on the previous k consecutive characters. Let a k-gram mean any string of k characters. Then for example, if the text has 100 occurrences of "th", with 60 occurrences of "the", 25 occurrences of "thi", 10 occurrences of "tha", and 5 occurrences of "tho", the Markov model of order 2 predicts that the next letter following the 2-gram "th" is 'e' with probability 3/5, 'i' with probability 1/4, 'a' with probability 1/10, and 'o' with probability 1/20.
##### The model was a class that had an order, recorded the frequency of each letter after a sequence, a function to generate a random character based on the probability of its occurrences.
  
<a href="http://imgbox.com/DDp1VQSQ" target="_blank"><img src="https://thumbs.imgbox.com/8b/72/DDp1VQSQ_t.png" alt="image host"/></a>
# __Getting Started__
##### For the other files of this program, please email me at joanel.vasquez1520@gmail.com explaning why you need the program. Put the name of the program in the subject and GITHUB. 
# __Prerequesites__
##### [C++](http://www.cyberprogrammers.net/2015/11/top-9-best-cc-ides-for-windowsmac-os.html) needs to be used in order to run this program. Follow the link provided that shows some C/C++ IDEs that could be used to run the program. 
# __Running the Program__
##### The functions to test the program must be written in the main.c file. Run the program by first reading integers k and T, and then reading the necessary information from text file. One is given as an example (see pic for command on how to call the program correctly). 
# __Author__
##### This program was written by Joanel Vasquez
