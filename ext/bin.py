def converter(n):  
  
    if(n > 1):  
      
        converter(n//2)  
  
      
    print(n%2, end=' ') 
      
      
  
if __name__ == '__main__':  

    a = int (input())
    
    converter(a)  
   
   