#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.1415927
#endif


fwd_kin(theta, x)
double *theta;
double x[3];
{
int i, j, k;
	
	
	
	
	double matrix5[4][4] = {  
   {1,0,0,0.15} ,   
   {0,1,0,0} ,   
   {0,0,1,0.04},
   {0,0,0,1}
	};

    double matrix4[4][4] = {  
   {cos(theta[3]),0,sin(theta[3]),0.2} ,   
   {0,1,0,0} ,   
   {-sin(theta[3]),0,cos(theta[3]),0},
   {0,0,0,1}
	};

	double matrix3[4][4] = {  
   {cos(theta[2]),0,sin(theta[2]),0.2} ,   
   {0,1,0,0.04} ,   
   {-sin(theta[2]),0,cos(theta[2]),0},
   {0,0,0,1}
	};
	
	double matrix2[4][4] = {  
   {cos(theta[1]),0,sin(theta[1]),0.0} ,   
   {0,1,0,0} ,   
   {-sin(theta[1]),0,cos(theta[1]),0.25},
   {0,0,0,1}
	};
	
	double matrix1[4][4] = {  
   {cos(theta[0]),-sin(theta[0]),0,0.0} ,   
   {sin(theta[0]),cos(theta[0]),0,0} ,   
   {0,0,1,0.0},
   {0,0,0,1}
	};
	
	double result[4][4] = {  
   {1,0,0,0.0} ,   
   {0,1,0,0} ,   
   {0,0,1,0.0},
   {0,0,0,1}
	};

	double temp[4][4];
	
	for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            
            {
                temp[i][j]=result[i][j];
            }

	for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            
            {
                result[i][j]=0;
            }

	
    for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            for(k=0; k<4; ++k)
            {
                result[i][j]+=matrix5[i][k]*temp[k][j];
            }
	/*----------------------------------------------------------------------------------------------------------------*/
	
	
	for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            
            {
                temp[i][j]=result[i][j];
            }

	for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            
            {
                result[i][j]=0;
            }		
	
    for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            for(k=0; k<4; ++k)
            {
                result[i][j]+=matrix4[i][k]*temp[k][j];
            }
	/*----------------------------------------------------------------------------------------------------------------*/
	for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            
            {
                temp[i][j]=result[i][j];
            }

	for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            
            {
                result[i][j]=0;
            }
	
    for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            for(k=0; k<4; ++k)
            {
                result[i][j]+=matrix3[i][k]*temp[k][j];
            }		

	/*----------------------------------------------------------------------------------------------------------------*/		
	for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            
            {
                temp[i][j]=result[i][j];
            }
	
	for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            
            {
                result[i][j]=0;
            }
	
    for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            for(k=0; k<4; ++k)
            {
                result[i][j]+=matrix2[i][k]*temp[k][j];
            }		
			
	/*----------------------------------------------------------------------------------------------------------------*/		
	for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            
            {
                temp[i][j]=result[i][j];
            }

	for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            
            {
                result[i][j]=0;
            }		
	
    for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
            for(k=0; k<4; ++k)
            {
                result[i][j]+=matrix1[i][k]*temp[k][j];
            }		
    // Displaying the result
    /*printf("\nOutput Matrix:\n");
    for(i=0; i<4; ++i)
        for(j=0; j<4; ++j)
        {
            printf("%f  ", result[i][j]);
            if(j == 4-1)
                printf("\n\n");
        }	*/	
	
	x[0]=result[0][3];
	x[1]=result[1][3];
	x[2]=result[2][3];
	
		
    return 1;
}

inv_kin(x, theta)
double *x;
double theta[6];
{
return 1;
}








