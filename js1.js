

(function name(params){
	console.log("message");
})();

var x = 100;
console.log(x);

var xiaoming = {
    name: '小明',
    birth: 1990,
    school: 'No.1 Middle School',
    height: 1.70,
    weight: 65,
    score: null
};

console.log(xiaoming.hasOwnProperty('name')); 

function area_of_circle(r, pi) {
	if (arguments.length === 1){
	var pi = 3.14;
		
} 
    var area = pi * r * r;
    return area;
}
console.log(area_of_circle(2)); 
