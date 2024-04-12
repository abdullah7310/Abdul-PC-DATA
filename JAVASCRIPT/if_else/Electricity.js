const prompt=require('prompt-sync')()
 let unit=Number(prompt('enter the unit  '));
 let rupees;
 if(unit<=50){
    rupees=(unit*0.50);
    total_bill=(20/100*(rupees)+rupees);
 }else if(unit<=150){
    rupees=(((unit-50)*0.75)+(50*0.50))
    total_bill=(20/100*rupees+(rupees))
 }else if(unit<=250){
    rupees=(((unit-150)*1.20)+(100*0.75)+(50*0.50))
    total_bill=(20/100*rupees+(rupees))
 }else{
    rupees=(((unit-250)*1.50)+(100*0.120)+(100*0.75)+(50*0.50))
    total_bill=(20/100*rupees+(rupees))
 }
 console.log(total_bill);