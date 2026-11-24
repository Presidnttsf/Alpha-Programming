
// stringify/resp single string converted into array
let resp = '["Ford", "BMW", "Fiat"]'

let data = JSON.parse(resp)

for (let index = 0; index < data.length; index++) {
    const element = data[index];
    console.log(index, element)
    
}


const person = {
  firstName: "John",
  lastName: "Doe",
  age: 50,
  fullName: function() {
    return this.firstName + " " + this.lastName;
  }
};
console.log(typeof(person))

let jsonData = JSON.stringify(person);
console.log(typeof(jsonData))
console.log(jsonData[0])

