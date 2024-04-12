const prompt=require('prompt-sync')()
let arr=[]
let n=Number(prompt('enter the length of the array'))
for(let i=0;i<n;i++){
    arr[i]=Number(prompt('enter the element'))
}
let count;
for(let i=0;i<arr.length;i++){
    count=1;
     if(arr[i]!=null){
    for(let j=i+1;j<arr.length;j++){
       
            if(arr[i]==arr[j]){
                count++;
                arr[j]=null;
            }

        }
    }
    if(arr[i]!=null){
        if(count==1){
            console.log(arr[i])
        }
    }
}
