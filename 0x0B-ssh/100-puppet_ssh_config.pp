#!/usr/bin/env bash
# using puppet to configure ssh_config file

file { 'etc/ssh/ssh_config':
	ensure => present,

content => "
	
	#ssh client or user configuration

	Host *
	IdentityFile ~/.ssh/school
	PasswordAuthentication no
	",
}
