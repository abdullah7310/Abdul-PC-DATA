const prompt =require('prompt-sync')()
let arr=[]
let n=Number(prompt('enter the length'))
for(let i=0;i<n;i++){
    arr[i]=Number(prompt('enter the elements'))
}
let count;
for(let i=0;i<arr.length;i++){
    count=1;
    for(let j=i+1;j<arr.length;j++){
        if(arr!=null){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=null;
            }
        }
    }
    if(arr[i]!=null){
        if(count>=1){
            console.log(`${arr[i]}=${count}`)
        }
    }
}