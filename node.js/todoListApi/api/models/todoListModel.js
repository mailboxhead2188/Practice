'use strict';
var mongoose = require('mongoose');
var schema = mongoose.Schema;

var taskSchema = new schema({
	name: {
		type: String,
		required: 'Enter task name'
	},
	created_date: {
		type: Date,
		default: Date.now
	},
	status: {
		type: [{
			type: String,
			enum: ['pending', 'started', 'completed', 'cut']
		}],
		default: 'pending'
	}
});

module.exports = mongoose.model('tasks', taskSchema);