=begin
#!/usr/bin/ruby -w

print <<EOF
   This is the first way of creating
   here document ie. multiple line string.
EOF

print <<"EOF";                # same as above
   This is the second way of creating
   here document ie. multiple line string.
EOF

print <<`EOC`                 # execute commands
	echo hi there
	echo lo there
EOC 
=end

BEGIN{
    puts "This is initialization phase"
}

END{
    puts "This is the final phase"
}



print <<"foo", <<"bar"  # you can stack them
	I said foo.
foo
	I said bar.
bar


print <<"foo", <<"bar"
   Hi vroo.
foo
   This is nav.
bar
    



