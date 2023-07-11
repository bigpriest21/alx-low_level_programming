class { 'stdlib': }

file { '/home/ubuntu/.ssh/config':
  ensure => 'present',
  mode   => '0600',
  owner  => 'ubuntu',
  group  => 'ubuntu',
  content => "
    Host *
      IdentityFile ~/.ssh/school
      PasswordAuthentication no
  ",
}

file_line { 'turn_off_passwd_auth':
  ensure => present,
  path   => '/home/ubuntu/.ssh/config',
  line   => 'PasswordAuthentication no',
  match  => 'PasswordAuthentication',
}

file_line { 'declare_identity_file':
  ensure => present,
  path   => '/home/ubuntu/.ssh/config',
  line   => 'IdentityFile ~/.ssh/school',
  match  => 'IdentityFile',
}

