const prompt=require('prompt-sync')()

let salary=Number(prompt('enter the salary'));
let hra,DA,gross_Salary;
if(salary<=10000){
    hra= 20/100*salary;
    DA= 80/100*salary;
    gross_Salary=hra+DA+salary;
}else if(salary<=20000){
    hra= 25/100*salary;
    DA= 90/100*salary;
    gross_Salary=hra+DA+salary;

}else{
    hra= 30/100*salary;
    DA= 95/100*salary;
    gross_Salary=hra+DA+salary;
}
console.log(gross_Salary);