/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: ConditionalOperator.c
 * Brief: This application is to print biggest of two numbers using ConditionalOperator
 * Author: Madhas Varalakshmi (varalakshmim956@gmail.com )
 * Title: Program Manager / Trainner
 * Last Modified Date: 16.03.2023
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
   int a, b, bigg;
   
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);

   bigg = a > b ? a : b;

   printf("biggest number is: %d\n", bigg);

   return 0;
}
// Program End
