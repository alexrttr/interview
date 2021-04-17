/*
Bracket Matcher
 Have the function BracketMatcher(str) take the str parameter
 being passed and return 1 if the brackets are correctly
 matched and each one is accounted for. O
 therwise return 0. For example: if str is 
 "(hello (world))", then the output should be 1, but if str 
 is "((hello (world))" the the output should be 0 
 because the brackets do not correctly match up.
 Only "(" and ")" will be used as brackets.
 If str contains no brackets return 1.
Examples
Input: "(coder)(byte))"
Output: 0
Input: "(c(oder)) b(yte)"
Output: 1
*/

using System;

class MainClass {

  public static string BracketMatcher(string str) {

    // code goes here  
    var strArray = str.ToCharArray();
    int a, b;
    a = b = 0;
    foreach(char ch in strArray)
    {
        if(ch == '(')
            ++a;
        if(ch == ')')
            ++b;
    }
    if(a == b && a != 0)
        return "1";
    else
        return "0";
  }

  static void Main() {  
    // keep this function call here
    Console.WriteLine(BracketMatcher(Console.ReadLine()));
  } 

}
