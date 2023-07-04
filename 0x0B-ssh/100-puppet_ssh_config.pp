# Puppet script to create ssh config file
file_line { 'Turn off passwd auth':
  ensure => 'present',
  path   => '/etc/ssh/sshd_config',
  line   => 'PasswordAuthentication no',
  match  => '^#?\s*PasswordAuthentication',
}

file_line { 'Declare identity file':
  ensure => 'present',
  path   => '/etc/ssh/sshd_config',
  line   => 'IdentityFile ~/.ssh/school',
  match  => '^#?\s*IdentityFile',
}
