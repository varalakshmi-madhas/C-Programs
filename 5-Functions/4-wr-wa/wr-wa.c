/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: wr-wa.c
 * Brief: This application is to add two numbers using user defined function sum of int return type and arguments are passing to this function from main().Call this user defined sum function from main().

 * Author: Madhas Varalakshmi (varalakshmim956@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 21.03.2023
 *
*********************************************************************************************/

// Header File
#include <stdio.h>
#include "math.h"

// Main Function
int main()
{
     int a,b,c;
     printf("enter 2 numbers: ");
     scanf("%d%d", &a,&b);
     c= sum (a,b);
     printf ("sum=%d\n", c);
     return 0;
}

// Program End
