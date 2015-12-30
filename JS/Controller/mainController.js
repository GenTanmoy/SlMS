var app = angular.module("mainApp", []);
app.controller("lightController", function($scope, $http, $window)
{
  //send signal function
  $scope.sendSignal = function(command)
  {
    //post data
    var dataObj = {
				request:command
		};

    //response success
		var res = $http.post('https://api.particle.io/v1/devices/Your_deviceid/blink?access_token=Your_Access_Token', dataObj);
		res.success(function(data, status, headers, config) {
			$scope.message = data;

		});
    // response error
		res.error(function(data, status, headers, config) {
			alert( "failure message: " + JSON.stringify({data: data}));
		});
  }

});
