#notational convention
n is the normal vector pointed outward the region.

//gradient and directional derivative:consider the tangent space at the point
//2 variable:integrate "along" gradients using small plane instead of short line as in one variable.
//partial derivative:fix other variables and integrate as if in one variable.

//strauss

//ch1.intro
order:highest derivative that appears
linear operator.
remark.(maybe locally,but I don't know) variable coefficient equation can't be reduced to a change of coordinate between partial derivatives(thus the change of x,y,z,...) because this will induce to solve a similar equation.
remark.the parametrization method (in D. Bleecker) is overly complicated for simple computational problems.
characteristic curve method.
initial condition:specify u at all space points at time t0.
boundary condition:specify u at all time at boundary of space points.
conditions at infinity.
jump conditions.
well-posed:exist,unique,stable.
eg.backward diffusion.singular matrix.half plane.
types of second order equation.
remark.in the classification,we rename t to y.
elliptic:positive-definite or negative-definite.
hyperbolic:1+ other- or 1- other+.
ultrahyperbolic.
parabolic:1zero other same.
if the coefficients are variable,the equation can change type in different regions.

//ch2.wave and diffusion on the whole line
wave equation:utt=c^2*uxx.in the domain R*R.c is not zero.
this is hyperbolic.
solution:u(x,t)=f(x+ct)+g(x-ct).
f travels left:dx/dt=-c.resp. g.
Initial value problem:utt=c^2*uxx.in the domain R*R.c is not zero.u(x,0)=p(x),ut(x,0)=q(x).
this is unique and exist.
Causality.
Energy.
diffusion equation:ut=kuxx.
this is parabolic.
Maximum principle.if u satisfy diffusion equation in a rectangle x:0~l,t:0~T,then the maximum must appear at the bottom side or the lateral sides.
unique
Stability:two sense
ut=kuxx,x in R,t>0,k is not 0.u(x,0)=p(x).
many invariance property.
fundamental solution:S(x,t)=1/sqrt(4pi*kt)*e^(-x^2/(4kt))
general solution,ignoring t:u(x)=H(S,p)(x)=int -inf to inf S(x-k)p(k)dk.

//ch3.reflections and source
ut=kuxx,x>0,t>0,k not 0.u(x,0)=p(x),u(0,t)=0.
odd extension method.
ut=kuxx,x>0,t>0,k not 0.u(x,0)=p(x),ux(0,t)=0.
even extension method.
utt=c^2*uxx,x>0,t in R.u(x,0)=p(x),ut(x,0)=q(x),u(0,t)=0.
domain of dependence changed.
wave on finite interval,extension method.
ut-kuxx=f(x,t),x in R,t>0.u(x,0)=p(x).
Duhamel's principle method.
