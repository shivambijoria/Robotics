#include <stdio.h>
#include <math.h>


double PD_control(theta, theta_dot, theta_ref, theta_dot_ref)
double theta, theta_dot, theta_ref, theta_dot_ref;
{	
	double kp=0.1;
	double kv=.6324;
	double I=.0541;
	double G=1.7625;
	double B=.2474;
	
	double accel=kp*(theta-theta_ref)+kv*(theta_dot-theta_dot_ref);
	double torque=I*accel+B*(theta_dot)+G*(theta);
	
  return(torque);
}

