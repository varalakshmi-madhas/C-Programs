/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: While.c
 * Brief: This application is to print number from 10 to 20 using while loop
 * Author: Madhas Varalakshmi (varalakshmim956@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.03.2023
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int a = 10;
     
        while( a <= 20 ) 
        {
		printf("num= %d\n", a);
                a++; 
        }
     return 0;
}

// Program End
