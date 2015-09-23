module.exports = (function (app){

	app.route('/')

	.get(function (request, response){

		response.render('index');

	})


});