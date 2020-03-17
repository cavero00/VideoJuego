# Se borra el usuario a crear, si existe
DROP USER IF EXISTS 'cavero'@'localhost';

# Se crean los usuarios
CREATE USER 'cavero'@'localhost' IDENTIFIED BY 'rvknPena';

# Se conceden los permisos
GRANT ALL PRIVILEGES ON * . * TO 'cavero'@'localhost';

FLUSH PRIVILEGES;


