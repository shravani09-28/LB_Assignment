    /*
        Step 1 :    Understand the problem statement
        Step 2 :    Write the alogrithm
        Step 3 :    Decide the programming language
        Step 4 :    Write the program
        Step 5 :    Test the program
    */

    ///////////////////////////////////////////////////
    //
    //  Step 1 : Understand the problem statement
    //           User is going to enter any 2 integers
    //           And we have to perfom division of those 2 numbers 
    //
    ///////////////////////////////////////////////////

    ///////////////////////////////////////////////////
    //  Step 2 :    Write the alogrithm
    /*
        START
            Accept first number as No1
            Accept second number as No2
            Create the variable as Ans to store the result
            Perform the division and store into Ans
            Display the result from Ans
        END
    */
    ///////////////////////////////////////////////////

    ///////////////////////////////////////////////////
    //
    //    Step 3 :    Decide the programming language
    //                We select C programming
    ///////////////////////////////////////////////////

    ///////////////////////////////////////////////////
    //
    //    Step 4 :    Write the program
    //
    ///////////////////////////////////////////////////

    #include<stdio.h>

    int Divide(int iNo1, int iNo2)
    {
        int iAns = 0;

        if(iNo2 ==0)
        {
            return -1;
        }
        iAns =iNo1 / iNo2;
        
        return iAns;
    }
    
    int main()
    {
        int iValue1 =15 , iValue2 =5;
        int iRet =0;
        
        iRet =Divide(iValue1, iValue2);

        printf("Division is : %d\n",iRet);

        return 0;
    }
