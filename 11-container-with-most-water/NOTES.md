if(height[l]<height[r]){
ans=max(ans,(height[l] * (r-l)));
l++;
}
else{
ans=max(ans, (height[r] * (r-l)));
r--;
}