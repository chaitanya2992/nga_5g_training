create user 'temp_user_1'@'localhost' Identified by 'Password@1234';

GRANT select,insert on nga_training.songs_db to 'temp_user_1'@'localhost';

GRANT update on nga_training.patient to 'temp_user_1'@'localhost';

REVOKE update on nga_training.patient from 'temp_user_1'@'localhost';

DROP USER 'temp_user_1'@'localhost';

flush privileges; 

commit;