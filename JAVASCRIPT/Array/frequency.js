const prompt=require('prompt-sync')()
let array=[]

let n=Number(prompt('enter the value :'))
for(let i=0;i<n;i++){
    array[i]=prompt(`enter the elements =`)

}
for(let i=0;i<n;i++){
    let fr=1;
    for(let j=i+1;j<n;j++){
       if(array[i]!=0){
        if(array[i]==array[j]){
            fr++;
            array[j]=0;
        }
       }
    }
    if(array[i]!=0){
    if(fr>=1){
    console.log(`${array[i]}=${fr}`)
    }
}
}