#include <cmath>
#include <matplot/matplot.h>
using namespace std;

int main()
{	
    using namespace matplot;
    
    // Prepare data.
    int n = 1000; // number of data points
    vector<double> x(n),y(n);
    for(int i=0; i<n; ++i) {
    
        double t = 2*M_PI*i/n;
        x.at(i) = 16*sin(t)*sin(t)*sin(t);
        y.at(i) = 13*cos(t) - 5*cos(2*t) - 2*cos(3*t) - cos(4*t);
    }
     
    title("2 rupee ki pepsi meri crush saxi");
    
    //plotting crap
    plot(x, y, "*r");
    
    //for arrow cutting in middle of heart
    //arrow(x1, y1, x2, y2); 
    auto a=arrow(-15,-15,17,17);
    a->line_width(3);
    a->color("red");

    //to make graph saxi
    box(on);
    grid(on);
    // show plots
   show();
   save("saxi-graph.png");
}
