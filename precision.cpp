#include <cstdio>
int main()
{
  float eps = 1.0;
  float one = 1.0;

  for( int ii=0; ii < 1000; ++ii)
    {
      eps /= 2.0;
      one = 1.0 + eps;
      std::printf("%10d %24.16e %24.16e\n" , ii , one, eps);
    }
  return 0;
}
