/*
    Roger Sentongo March 3rd 2020.
    A simple program to illustrate use of sstream class objects
*/

#include <iostream>
#include <sstream>
#include <string>

//String Stream allows you to read each word from a string

int countWords(std::string str)
{
    //We create a stringstream object called container and
    //initialize it to a string
    std::stringstream container_(str); //Will break the string down into space separated words
    //string variable to store each individual word
    std::string keeper;
    int count; //number of words

    //Loop through the stream until the container_ is empty
    while(container_ >> keeper)
    {
        count++;
    }

    return count;


}

int main()
{
    std::string scar {" Well we know that we're going to win"};

    std::cout << "The number of words is: "<< countWords(scar)<< std::endl;

    return 0;
}

