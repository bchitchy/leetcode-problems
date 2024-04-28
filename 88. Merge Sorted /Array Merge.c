void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{   
    int index1 = 0;
    int index2 = 0;
    while(index1 < n && index2 < m)
    {
     
        if(nums2[index1] <= nums1[index2])
        {
            for(int i = m-1; i >= index2; i--)
            {   
                nums1[i+1] = nums1[i];
            }
            m++;
            nums1[index2] = nums2[index1++];
            
        }
        
        else
        {
            index2++;
        }
        
    }
    
    
    while(index1 < n)
    {
        nums1[m++] = nums2[index1++];
    }
    
    
}
