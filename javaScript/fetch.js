const BASE_URL = 'https://dummyjson.com/products';

let response = fetch(BASE_URL+"?limit=2")
let data = response.then(function getData(resp){
return resp.json();
})
let result = data.then((data)=> {
    console.log(data.products[0].id)
    console.log(data.products[0].thumbnail)
    
});


