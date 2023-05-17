/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: AssignmentOperator.c
 * Brief: c program to show usage of assignment operators = , += , -= , *= , /=.
 * Author: Madhas Varalakshmi (varalakshmim956@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 16.03.2023
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int a = 99;
     int b;

     b = a;
     printf("Value of result =: %d\n", b);

     b += a;  
     printf("Value of result +=: %d\n", b);

     b -= a;  
     printf("Value of result -=: %d\n", b);

     b *= a;  
     printf("Value of result *=: %d\n", b);

     b /= a;  
     printf("Value of result /=: %d\n", b);

     return 0;
}

// Program End
