const prompt=require('prompt-sync')()
let array=[]
let n=prompt('enter the length')
for(let i=0;i<n;i++){
    array[i]=prompt('enter the elements >>')

}
for(let i=0;i<n;i++){
    let count=0;
    for(let j=i+1;j<n;j++){
        if(array[i]!=null){
            if(array[i]==array[j]){
            count++;
            array[j]=null;
        }
        }
        
    }
    if(array[i]!=null){
        if(count>=1){
        console.log(`${array[i]}`);
    }
    
    }
}