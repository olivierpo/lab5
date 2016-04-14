#include <stdio.h>
#include "MathFunctions.h"
#include "TutorialConfig.h"

#include <math.h>

// a hack square root calculation using simple operations
double mysqrt(double x)
{
  if (x <= 0)
    {
    return 0;
    }

  double result;

  // if we have both log and exp then use them
#if defined(HAVE_LOG) && defined (HAVE_EXP)
  result = exp(log(x)*0.5);
std::cout << result << " with log and exp" << std::endl; 
#else
  result = sqrt(x);
#endif
  return result;
}
