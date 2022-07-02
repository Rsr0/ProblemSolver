}
len=r-l-1;
if(len > mx)
{
mx=len;
start=l+1;
end=r-1;
}
}
//Even length
for(int i=0; i<n-1;i++){
int l,r, len;
l=i; r=i+1;
while(l>=0 && r<n){
if(s[l]==s[r]){
l--; r++;
}
else
break;
}
len=r-l-1;
if(len > mx)
{
mx=len;
start=l+1;
end=r-1;
}
}
return(s.substr(start,mx));
}
};