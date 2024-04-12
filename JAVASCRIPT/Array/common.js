const prompt=require('prompt-sync')

let arr1=[1,2,2,3,4,5,4,4,4,6]


for(let i=0;i<arr1.length;i++){
    let count=0;
    for(let j=i+1;j<arr1.length;j++){
        if(arr1[j]!=null){
            if(arr1[i]==arr1[j]){
           
            count+=1;
            arr1[j]=null
        }
        
        }
    }
    if(arr1[i]!=null){
        if(count>=1){
    console.log(arr1[i],count)
}
    }

}

// console.log("Abdul");
