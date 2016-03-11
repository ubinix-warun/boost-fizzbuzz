
//FizzBuzz Spec.

//    input => output
//        1 => 1
//        2 => 2
//        3 => Fizz .... > -1
//        4 => 4
//        5 => Buzz .... > -2
//        6 => Fizz
//        7 => 7
//        8 => 8
//        9 => Fizz
//       10 => Buzz
//       11 => 11
//       12 => Fizz
//       13 => 13
//       14 => 14
//       15 => FizzBuzz > -3
//       ....
//       ..

int fizzbuzz(int input)
{
    if(input%3 == 0)
        return -1;
    if(input == 5)
        return -2;
    return input;
}
