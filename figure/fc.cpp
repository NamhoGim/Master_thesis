// FC layer computation
// Stride: 1
float output[Oc];
float input[Ic][H][W];
float weight[Oc][Ic][H][W];

for(int o=0; o<Oc; ++o){
 for(int i=0; i<Ic; ++i){
  for(int h=0; h<H; ++h){
   for(int w=0; w<W; ++w){
    output[o]=input[i][h][w]
            *weight[c][i][h][w];
}}}}
