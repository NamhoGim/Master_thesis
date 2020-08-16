// Convolution layer
// Stride: 1, pad: 0
float output[Oc][H][W];
float input[Ic][H][W];
float weight[Oc][Ic][K][K];

// Computation of CONV.
for(int o=0; o<Oc; ++o){
 for(int h=0; h<H; ++h){
  for(int w=0; w<W; ++w){
   float sum = 0.f;
   for(int i=0; i<Ic; ++i){
    for(int fh=0; fh<K; ++fh){
     for(int fw=0; fw<K; ++fw){
      int in_h = h+fh;
      int in_w = w+fw;
      sum+=input[i][in_h][in_w]
            *weight[o][i][fh][fw];
   }}}
   output[o][h][w]=sum;
}}}

