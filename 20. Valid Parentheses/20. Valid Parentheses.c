bool isValid(char* s) 
{   
    int index = 0;
    char arr[5000] = {0};

    char left[3] = {'(' , '{' , '['};
    char right[3] = {')' , '}' , ']'};

    for(int i = 0; i< strlen(s); i++)
    {
        for(int k = 0; k < 3; k++)
        {
            if(s[i] == left[k])
            {
                arr[index++] = left[k];
            }

            else if(s[i] == right[k] && (index == 0 || left[k] != arr[--index] ))
            return false;
            
            
            
        }

        
        
    }
    return index == 0;
}
