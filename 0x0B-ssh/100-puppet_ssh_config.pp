# make changes to config file using Puppet

file { '/home/ubuntu/.ssh/config':
  ensure => present,
  owner  => 'ubuntu',
  group  => '',
  mode   => '0600',
  content => "
    Host 100.26.236.23
      IdentityFile ~/.ssh/school
      PreferredAuthentications publickey
      PasswordAuthentication no
  ",
}
