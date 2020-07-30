class Solution {
public: 
    int trap(vector<int>& h) { 
         int n=h.size();
         if(n<3) return 0;
         vector<int> lh(n),rh(n); 
        
         lh[0]=h[0];
         int mx=h[0];
         for(int i=1;i<n;i++)
         {   mx=max(mx,h[i]);   //find left max height for every building
             lh[i]=mx; 
         }
         
         rh[n-1]=h[n-1];
         mx=h[n-1];
         for(int i=n-2;i>=0;i--)
         {    mx=max(mx,h[i]);  //find right max height for every building 
              rh[i]=mx;
         }
        
          int w=0;
          for(int i=0;i<n;i++)
         {   //cout<<lh[i]<<" "<<h[i]<<" "<<rh[i]<<"\n";
             w+=min(lh[i],rh[i])-h[i];   
         }
         return w;
           
    }
};
