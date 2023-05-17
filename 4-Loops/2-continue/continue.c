/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: continue.c
 * Brief: This application is to print num from 10 to 20 using loop.but it should escape 15 using continue statement.
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

        do
        {
		if( a == 15) 
                {
                        a = a + 1; 
                        continue; 
                }
                printf("num=%d\n", a); 
		a++;
        }
        while( a <= 20 ); 
     return 0;
}

// Program End
