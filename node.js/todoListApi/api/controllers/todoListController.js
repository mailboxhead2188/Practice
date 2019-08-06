'use strict';

var mongoose = require('mongoose'), task = mongoose.model('tasks');

function ListAllTasks(request, response) {
	task.find({}, function(err, task) {
		if (err) {
			response.send(err);
		}
		response.json(task);
	});

};

function CreateTask(request, response) {
	var newTask = new task(request.body);
	newTask.save(function(err, task) {
		if (err) {
			response.send(err);
		}
		response.json(task);
	});

};

function ReadTask(request, response) {
	task.findById(request.params.taskId, function(err, task) {
		if (err) {
			response.send(err);
		}
		response.json(task);
	});
};

function UpdateTask(request, response) {
	task.findOneAndUpdate({ id: request.params.taskId }, request.body, {new: true}, function(err, task) {
		if (err) {
			response.send(err);
		}
		response.json(task);
	});
};

function DeleteTask(request, response) {
	task.remove({
		_id: request.params.taskId
	},
	function(err, task) {
		if (err) {
			response.send(err);
		}
		response.json({ message: 'Task deleted'});
	});
};	

exports.listAllTasks = ListAllTasks;
exports.createTask = CreateTask;
exports.readTask = ReadTask;
exports.updateTask = UpdateTask;
exports.deleteTask = DeleteTask;